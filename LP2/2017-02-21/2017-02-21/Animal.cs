using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _2017_02_21
{
    class Animal
    {
        string nome;
        string apelido;
        bool selvagem;
        Pessoa pessoa;

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

        public string Apelido
        {
            get
            {
                return apelido;
            }

            set
            {
                apelido = value;
            }
        }

        public bool Selvagem
        {
            get
            {
                return selvagem;
            }

            set
            {
                selvagem = value;
            }
        }

        internal Pessoa Pessoa
        {
            get
            {
                return pessoa;
            }

            set
            {
                pessoa = value;
            }
        }

        public string Comunicar()
        {
            return "Miau";
        }

        public void Brincar()
        {
            Console.WriteLine("Brincou...");
        }
    }
}
