from uuid import uuid4, UUID
from repository import NomeRepository

class NomeService:
    def __init__(self):
        self.repo = NomeRepository()

    def listar(self):
        return self.repo.listar()

    def criar(self, nome: str):
        data = {
            "id": str(uuid4()),
            "nome": nome
        }
        return self.repo.criar(data)

    def atualizar(self, id: UUID, nome: str):
        return self.repo.atualizar(id, nome)

    def deletar(self, id: UUID):
        return self.repo.deletar(id)
