using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _2017_03_07
{
    class Banco
    {
        int numBanco;
        Conta[] contas;
        int numContas;

        public Banco(int numBanco)
        {
            this.numBanco = numBanco;
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
            for (int i = 0; i < numContas; i++)
            {
                System.Console.WriteLine(contas[i]);
            }
        }

        public void ListarContas(int numAgencia)
        {
            for (int i = 0; i < numContas; i++)
            {
                if(contas[i].NumAgencia == numAgencia)
                {
                    System.Console.WriteLine(contas[i]);
                }
            }
        }

        public double AprovarLimite(double valor, int tempoConta)
        {
            return Math.Min(valor, 200.0 + (300.0 * tempoConta));
        }
    }
}
