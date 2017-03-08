using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _2017_03_07
{
    class Program
    {
        static void Main(string[] args)
        {
            Cliente joao = new Cliente("João", 1234);
            Cliente maria = new Cliente("Maria", 2345);
            Banco bb = new Banco(1);

            Conta c1 = new Conta(123, 234, joao, bb);
            joao.AdicionarConta(c1);
            bb.AdicionarConta(c1);

            Conta c2 = new Conta(345, 234, maria, bb);
            maria.AdicionarConta(c2);
            bb.AdicionarConta(c2);

            bb.ListarContas();

            c2.SolicitarLimite(10000.0, 1234);
            System.Console.WriteLine("Limite da conta = " + c2.Limite);

            c1.Depositar(1000.0, 1234);
            c1.Sacar(300.0, 1234);
            System.Console.WriteLine("Saldo da conta = " + c1.Saldo);

            System.Console.Read();
        }
    }
}