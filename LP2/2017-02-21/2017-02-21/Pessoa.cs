using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _2017_02_21
{
    class Pessoa
    {
        string nome;
        int idade;
        long identidade;
        string profissao;
        Animal animal;

        public string Nome
        {
            get
            {
                return nome;
            }

            set
            {
                nome = value;
            }
        }

        public int Idade
        {
            get
            {
                return idade;
            }

            set
            {
                idade = value;
            }
        }

        public long Identidade
        {
            get
            {
                return identidade;
            }

            set
            {
                identidade = value;
            }
        }

        public string Profissao
        {
            get
            {
                return profissao;
            }

            set
            {
                profissao = value;
            }
        }

        internal Animal Animal
        {
            get
            {
                return animal;
            }

            set
            {
                animal = value;
            }
        }

        public string Falar()
        {
            return "Lalala...";
        }
        
        public void Trabalhar(int horas)
        {
            Console.WriteLine("Trabalhou " + horas + " horas...");
        }

        public void Comer()
        {
            Console.WriteLine("Comeu...");
        }
    }
}
