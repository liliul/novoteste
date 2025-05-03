// See https://aka.ms/new-console-template for more information
// Console.WriteLine("Hello, World!");

// string nome = "Naruto & Goku";
// string nome = Console.ReadLine();

// Console.WriteLine($"CSharp com: {nome}");


// calculadora
// int numero1;
// int numero2;

// Console.WriteLine("primeiro numero");
// numero1 = int.Parse(Console.ReadLine());

// Console.WriteLine("segundo numero");
// numero2 = int.Parse(Console.ReadLine());

// int res = numero1 * numero2;

// Console.WriteLine("Resultado: " + res);

// float numero1;
// float numero2;

// Console.WriteLine("primeiro numero");
// numero1 = float.Parse(Console.ReadLine());

// Console.WriteLine("segundo numero");
// numero2 = float.Parse(Console.ReadLine());

// float res = numero1 * numero2;

// Console.WriteLine("Resultado: " + res);


// media da nota

// float nota1;
// float nota2;
// float nota3;
// float nota4;
// float nota5;

// Console.WriteLine("Calculando a media da nota");
// nota1 = float.Parse(Console.ReadLine());
// nota2 = float.Parse(Console.ReadLine());
// nota3 = float.Parse(Console.ReadLine());
// nota4 = float.Parse(Console.ReadLine());
// nota5 = float.Parse(Console.ReadLine());

// float somatorio = nota1 + nota2 + nota3 + nota4 + nota5;

// Console.WriteLine("Tirando a Media de: " + somatorio);

// float dividirMedia = somatorio / 5;

// Console.WriteLine($"Resultado da media da nota: > {dividirMedia}");



// Média da nota com validação de entrada

// float nota1 = LerNota("Digite a nota 1: ");
// float nota2 = LerNota("Digite a nota 2: ");
// float nota3 = LerNota("Digite a nota 3: ");
// float nota4 = LerNota("Digite a nota 4: ");
// float nota5 = LerNota("Digite a nota 5: ");

// // Somatório das notas
// float somatorio = nota1 + nota2 + nota3 + nota4 + nota5;
// Console.WriteLine("Somatório das notas: " + somatorio);

// // Média
// float media = somatorio / 5;
// Console.WriteLine("Resultado da média da nota: > " + media);



// // Função para ler e validar nota
// static float LerNota(string mensagem)
// {
//     float nota;
//     bool valido = false;

//     do
//     {
//         Console.Write(mensagem);
//         string entrada = Console.ReadLine();

//         if (float.TryParse(entrada, out nota))
//         {
//             valido = true;
//         }
//         else
//         {
//             Console.WriteLine("Entrada inválida. Digite um número válido.");
//         }
//     }
//     while (!valido);

//     return nota;
// }


// // quiz

// Console.WriteLine("Quiz qual time ganhou mais Champeas-legue");
// Console.WriteLine("A: Real madrid");
// Console.WriteLine("B: Milan");
// Console.WriteLine("C: Ajax");
// Console.WriteLine("D: Juventus");
// Console.WriteLine("E: Manchester unidade");

// string respostaDoUsuario = Console.ReadLine();

// switch (respostaDoUsuario)
// {
//     case "b":
//         Console.WriteLine("Não é o Milan, resposta Errada");
//         break;
//     case "e":
//         Console.WriteLine("Não é o Manchester unidade, resposta Errada");
//         break;
//     case "c":
//         Console.WriteLine("Não é o Ajax, resposta Errada");
//         break;
//     case "a":
//         Console.WriteLine("Sim resposta correta Real madrid Ganhou");
//         break;
//     case "d":
//         Console.WriteLine("Não é o Juventus, resposta Errada");
//         break;
//     default:
//         Console.WriteLine("A resposta tem que ser com letras minuscula ex(a, b, c, d, e)");
//         break;
// }


// // app

Console.Write("Quantas notas voce quer inserir? ");
int quantidade = int.Parse(Console.ReadLine());

List<double> notas = new List<double>();

for (int i = 0; i < quantidade; i++)
{
    Console.Write($"Digite a nota {i + 1}: ");
    double nota = double.Parse(Console.ReadLine());
    notas.Add(nota);
}

double soma = 0;
foreach (double nota in notas)
{
    soma += nota;
}
double media = soma / notas.Count;

Console.WriteLine("\nNotas inseridas:");
for (int i = 0; i < notas.Count; i++)
{
    Console.WriteLine($"Nota {i + 1}: {notas[i]}");
}
Console.WriteLine($"Media das notas: {media:F2}");

if (media >= 7) Console.WriteLine("Aprovado");
else Console.WriteLine("Reprovado");
