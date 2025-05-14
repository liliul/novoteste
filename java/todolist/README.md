Rotas no insomnia

Criar usuario
```declarative
// POST http://localhost:8080/users/ > Body/json
{
"username": "Liliul",
"name": "liliu estudo",
"password": "1231241"
}
```

Criar tarefa com autenticação
```declarative
// POST http://localhost:8080/tasks/ > Auth/Basic > Body/json
{
"description": "Aula de Csharp na rocketseat com Liliu",
"title": "Dotnet c#",
"priority": "ALTA",
"startAt": "2025-10-05T12:30:00",
"endAt": "2025-11-05T15:30:00",
"idUser": "144ecf98-2c26-4a61-9fbd-7e982d417284"
}
```

Listar todas as tarefas autenticado
```declarative
// GET http://localhost:8080/tasks/ > Auth/Basic
```

Atualizar a tarefa autenticado
```declarative
// PUT http://localhost:8080/tasks/id > Auth/Basic > Body/json
{
"description": "Aula de Csharp na rocketseat com Liliu estudo",
"title": "Csharp & dotnet core"
}
```

H2
```declarative
// http://localhost:8080/h2-console/

// mais informações em > resources/application.properties
```