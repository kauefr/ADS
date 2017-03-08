using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _2017_03_07
{
    class Cliente
    {
        string nome;
        long cpf;
        Conta[] contas;
        int numContas;

        public long Cpf
        {
            get
            {
                return cpf;
            }
        }

        public string Nome
        {
            get
            {
                return nome;
            }
        }

        public Cliente(string nome, long cpf)
        {
            this.nome = nome;
            this.cpf = cpf;
            contas = new Conta[10];
            numContas = 0;
        }

        public bool AdicionarConta(Conta c)
        {
            if (numContas == 10)
            {
                return false;
            }
            else
            {
                contas[numContas] = c;
                numContas++;
                return true;
            }
        }

        public bool RemoverConta(int indice)
        {
            if (indice < 0 || numContas <= indice)
            {
                return false;
            }

            if (indice == 9)
            {
                numContas--;
                return true;
            }

            for (int i = indice; i < 9; i++)
            {
                contas[i] = contas[i + 1];
            }
            numContas--;
            return true;
        }

        public void ListarContas()
        {
            for(int i=0; i<numContas; i++)
            {
                System.Console.WriteLine(contas[i]);
            }
        }
    }
}
