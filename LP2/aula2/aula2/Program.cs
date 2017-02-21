using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace aula2_ex
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] palavras = { "abobora", "lala", "lelele", "lili", "lolo", "lulu", "asd", "a", "eee", "eeeeeeeeeeeeeeeeeeee" };
            /*
            string[] palavras = new string[10];
            for(int i = 0; i<10; i++)
            {
                palavras[i] = Console.ReadLine();
            }
            */
            foreach (string s in palavras)
            {
                for (int c = s.Length - 1; c >= 0; c--)
                {
                    Console.Write(s[c]);
                }
                Console.WriteLine();
            }
            int maior = 0;
            int menor = 0;
            for (int i = 0; i < palavras.Length; i++)
            {
                if (palavras[i].Length < palavras[menor].Length)
                {
                    menor = i;
                }
                if (palavras[i].Length > palavras[maior].Length)
                {
                    maior = i;
                }
            }

            Console.WriteLine("Maior palavra = " + palavras[maior]);

            Console.WriteLine("Menor palavra = " + palavras[menor]);

            foreach (string s in palavras)
            {
                if (s[0] == 'a')
                {
                    Console.WriteLine("Começa com 'a' = " + s);
                }
            }
            Console.Write("Ouvi ontem um pagode que dizia assim: \"");
            foreach (string s in palavras)
            {
                if (s[s.Length - 1] == 'e')
                {
                    Console.Write(s + " ");
                }
            }
            Console.WriteLine("!\"");
            Console.Read();
        }
    }
}