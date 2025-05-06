Configuração para do wsl 2

```bash
# criando o container no wsl2
docker run --name dbsql -e MYSQL_ROOT_PASSWORD=root -p 3306:3306 -d mysql

# arquivo appsettings.json
 "ConnectionStrings": {
    "AppDbConnectionString": "server=localhost; port=3306; database=DB;  User=root; Password=root;"
  }

# conectar no terminal do mysql
docker exec -it dbsql mysql -uroot -proot
```
