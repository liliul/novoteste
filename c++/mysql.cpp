#include <mysql_driver.h>
#include <mysql_connection.h>
#include <iostream>

int main() {
    // Cria uma instância do driver MySQL
    sql::mysql::MySQL_Driver *driver;
    sql::Connection *con;

    // Inicializa o driver
    driver = sql::mysql::get_mysql_driver_instance();

    try {
        // Conecta-se ao banco de dados
        con = driver->connect("tcp://127.0.0.1:3306", "testuser", "testpassword");

        // Seleciona o banco de dados
        con->setSchema("testdb");

        std::cout << "Conectado ao banco de dados com sucesso!" << std::endl;

        // Fechar a conexão
        delete con;
    } catch (sql::SQLException &e) {
        std::cerr << "Erro de SQL: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
