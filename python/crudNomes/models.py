from pydantic import BaseModel
from uuid import UUID

class NomeCreate(BaseModel):
    nome: str

class NomeResponse(BaseModel):
    id: UUID
    nome: str
