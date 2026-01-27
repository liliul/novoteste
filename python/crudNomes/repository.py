import json
from uuid import UUID
from pathlib import Path

DB_PATH = Path("db/nomes.json")

class NomeRepository:
    def __init__(self):
        self.db = []
        self._load()

    def _load(self):
        if not DB_PATH.exists():
            self.db = []
            return

        try:
            with open(DB_PATH, "r", encoding="utf-8") as f:
                self.db = json.load(f)
        except (json.JSONDecodeError, ValueError):
            self.db = []

    def _save(self):
        DB_PATH.parent.mkdir(exist_ok=True)
        with open(DB_PATH, "w", encoding="utf-8") as f:
            json.dump(self.db, f, ensure_ascii=False, indent=4)

    def listar(self):
        return self.db

    def buscar_por_id(self, id: UUID):
        return next((item for item in self.db if item["id"] == str(id)), None)

    def criar(self, data: dict):
        self.db.append(data)
        self._save()
        return data

    def atualizar(self, id: UUID, nome: str):
        item = self.buscar_por_id(id)
        if not item:
            return None
        item["nome"] = nome
        self._save()
        return item

    def deletar(self, id: UUID):
        item = self.buscar_por_id(id)
        if not item:
            return False
        self.db.remove(item)
        self._save()
        return True
