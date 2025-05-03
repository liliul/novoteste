using System;
using System.Collections.Generic;

class Pessoa
{
    public string Nome { get; set; }
    public int Idade { get; set; }

    public Pessoa(string nome, int idade)
    {
        Nome = nome;
        Idade = idade;
    }

    public void Exibir()
    {
        Console.WriteLine($"Nome: {Nome}, Idade: {Idade}");
    }
}

class Cadastro
{
    private List<Pessoa> pessoas = new List<Pessoa>();

    public void AdicionarPessoa(Pessoa pessoa)
    {
        pessoas.Add(pessoa);
        Console.WriteLine("Pessoa cadastrada com sucesso!\n");
    }

    public void ListarPessoas()
    {
        if (pessoas.Count == 0)
        {
            Console.WriteLine("Nenhuma pessoa cadastrada.\n");
            return;
        }

        Console.WriteLine("\n--- Lista de Pessoas Cadastradas ---");
        foreach (var p in pessoas)
        {
            p.Exibir();
        }
        Console.WriteLine();
    }
}

class Program
{
    static void Main()
    {
        Cadastro cadastro = new Cadastro();
        int opcao;

        do
        {
            Console.WriteLine("===== Sistema de Cadastro =====");
            Console.WriteLine("1 - Cadastrar nova pessoa");
            Console.WriteLine("2 - Listar pessoas");
            Console.WriteLine("0 - Sair");
            Console.Write("Escolha uma opção: ");

            if (!int.TryParse(Console.ReadLine(), out opcao))
            {
                Console.WriteLine("Opção inválida!\n");
                continue;
            }

            switch (opcao)
            {
                case 1:
                    Console.Write("Digite o nome: ");
                    string nome = Console.ReadLine();

                    Console.Write("Digite a idade: ");
                    if (!int.TryParse(Console.ReadLine(), out int idade))
                    {
                        Console.WriteLine("Idade inválida!\n");
                        break;
                    }

                    Pessoa novaPessoa = new Pessoa(nome, idade);
                    cadastro.AdicionarPessoa(novaPessoa);
                    break;

                case 2:
                    cadastro.ListarPessoas();
                    break;

                case 0:
                    Console.WriteLine("Saindo do sistema...");
                    break;

                default:
                    Console.WriteLine("Opção inválida!\n");
                    break;
            }

        } while (opcao != 0);
    }
}
