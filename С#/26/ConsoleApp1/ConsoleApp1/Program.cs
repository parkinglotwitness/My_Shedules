using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.ForegroundColor = ConsoleColor.Magenta;
            Console.BackgroundColor = ConsoleColor.White;
            Console.Clear();
            int kip = 0;
            Console.WriteLine("Введите какое устройство хотите добавить, КПК(1), Мобильное устройство (2)");
            kip = Int32.Parse(Console.ReadLine());
            if (kip == 2)
            {
 //               Comunication t1 = new Comunication();
                MobilePhone t11 = new MobilePhone();
                t11.Input();
                Console.Clear();
                t11.Print();
            } else
            {
                if (kip == 1)
                {
 //                   Comunication t1 = new Comunication();
                    KPK t11 = new KPK();
                    t11.Input();
                    Console.Clear();
                    t11.Print();
                }
            }
            Console.ReadKey();
        }
    }
}
