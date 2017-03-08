using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _2017_03_07
{
    class Conta
    {
        long numConta, numAgencia;
        double saldo, limite;
        int tempoConta;
        Cliente cliente;
        Banco banco;

        public int TempoConta
        {
            get
            {
                return tempoConta;
            }

            set
            {
                tempoConta = value;
            }
        }

        public double Saldo
        {
            get
            {
                return saldo;
            }
        }

        public double Limite
        {
            get
            {
                return limite;
            }
        }

        public long NumConta
        {
            get
            {
                return numConta;
            }
        }

        public long NumAgencia
        {
            get
            {
                return numAgencia;
            }
        }

        public Conta(long numConta, long numAgencia, Cliente cliente, Banco banco)
        {
            this.numConta = numConta;
            this.numAgencia = numAgencia;
            this.cliente = cliente;
            this.banco = banco;

            saldo = 0.0;
            limite = 0.0;
            TempoConta = 0;
        }

        public bool Sacar(double valor, long senha)
        {
            if (0.0 <= valor && valor <= Saldo)
            {
                saldo -= valor;
                return true;
            }
            return false;
        }

        public void Depositar(double valor, long senha)
        {
            if (0.0 <= valor)
            {
                saldo += valor;
            }
        }

        public double SolicitarLimite(double valor, long senha)
        {
            limite = banco.AprovarLimite(valor, tempoConta);
            return limite;
        }

        public override string ToString()
        {
            return "Conta: " + numConta + " Agência: " + numAgencia + " Cliente: " + cliente.Nome;
        }
    }
}
