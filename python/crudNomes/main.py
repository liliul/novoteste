from fastapi import FastAPI, HTTPException
from uuid import UUID
from service import NomeService

app = FastAPI(title="CRUD de Nomes")

service = NomeService()

@app.get("/nomes")
def listar_nomes():
    return service.listar()

@app.post("/nomes")
def criar_nome(nome: str):
    return service.criar(nome)

@app.put("/nomes/{id}")
def atualizar_nome(id: UUID, nome: str):
    resultado = service.atualizar(id, nome)
    if not resultado:
        raise HTTPException(status_code=404, detail="ID não encontrado")
    return resultado

@app.delete("/nomes/{id}")
def deletar_nome(id: UUID):
    if not service.deletar(id):
        raise HTTPException(status_code=404, detail="ID não encontrado")
    return {"message": "Nome removido com sucesso"}
