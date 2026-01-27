from fastapi import FastAPI, HTTPException
from uuid import UUID
from service import NomeService
from models import NomeCreate

app = FastAPI(title="CRUD de Nomes")

service = NomeService()

@app.get("/nomes")
def listar_nomes():
    return service.listar()

@app.post("/nomes")
def criar_nome(data: NomeCreate):
    return service.criar(data.nome)

@app.put("/nomes/{id}")
def atualizar_nome(id: UUID, data: NomeCreate):
    resultado = service.atualizar(id, data.nome)
    if not resultado:
        raise HTTPException(status_code=404, detail="ID não encontrado")
    return resultado

@app.delete("/nomes/{id}")
def deletar_nome(id: UUID):
    if not service.deletar(id):
        raise HTTPException(status_code=404, detail="ID não encontrado")
    return {"message": "Nome removido com sucesso"}
