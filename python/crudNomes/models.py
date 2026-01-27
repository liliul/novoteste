from pydantic import BaseModel
from uuid import UUID

class Nome(BaseModel):
    id: UUID
    nome: str
