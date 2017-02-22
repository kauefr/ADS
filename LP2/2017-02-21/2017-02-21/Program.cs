using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _2017_02_21
{
    class Program
    {
        static void Main(string[] args)
        {
            Pessoa p = new Pessoa();
            Animal a = new Animal();

            p.Nome = "Jonas";
            p.Idade = 42;
            p.Identidade = 1324123;
            p.Profissao = "Pescador";
            p.Animal = a;

            a.Nome = "Rossi";
            a.Apelido = "Baleia";
            a.Selvagem = true;
            a.Pessoa = p;

            Console.WriteLine(p.Falar());
            p.Trabalhar(10);
            p.Comer();

            Console.WriteLine(a.Comunicar());
            a.Brincar();

            Console.Read();
        }
    }
}
