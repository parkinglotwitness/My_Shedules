using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

//namespace ConsoleApplication1
//{
//    class Program
//    {
//        static void Main(string[] args)
//        {
//            int a, b;
//            a = Int32.Parse(Console.ReadLine());
//            b = Int32.Parse(Console.ReadLine());
//            double p =  Math.Sqrt(a * b);
//            Console.WriteLine("SQRT(a * b) = " + p);
//            Console.ReadKey();
//        }
//    }
//}



////2
//namespace ConsoleApplication1
//{
//    class Program
//    {
//        static void Main(string[] args)
//        {
//            int a, b;
//            bool result;
//            a = Int32.Parse(Console.ReadLine());
//            b = Int32.Parse(Console.ReadLine());
//            if (a % 2 != 0 || b % 2 != 0)
//            {
//                result = true;
//                Console.WriteLine(result);
//            }
//            else
//            {
//                result = false;
//                Console.WriteLine(result);
//            }
//            Console.ReadKey();

//        }
//    }
//}


//3
namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {
            int a, b;
            a = Int32.Parse(Console.ReadLine());
            b = Int32.Parse(Console.ReadLine());
            //if (a => b)
            //    break;
            double sum = 0;
            for (int i = a; i <= b; i++)
            {
                double kva = Math.Pow(i, 2);
                sum = sum + kva;
            }
            Console.WriteLine("Сумма квадратов= {0}" , sum );
            Console.ReadKey();
        }
    }
}