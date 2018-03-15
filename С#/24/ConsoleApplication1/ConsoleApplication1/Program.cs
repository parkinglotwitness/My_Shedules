using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {


            //ЗАДАНИЕ 1
            //double[] arr = new double[10];
            //Random rand = new Random();
            //for (int i = 0; i < arr.Length; i++)
            //{
            //    arr[i] = rand.Next(0, 10) + rand.NextDouble();
            //}
            //Console.Write("Array {1}: ");
            //for (int i = 0; i < arr.Length; i++)
            //{
            //    Console.Write(" ");
            //    Console.Write(arr[i]);
            //}
            //double min = arr[0];
            //int imin = 0;
            //for (int i = 0; i < arr.Length; i++)
            //{
            //    if (arr[i] < min)
            //    {
            //        min = arr[i];
            //        imin = i;
            //    }
            //}
            //Console.WriteLine();
            //Console.Write(" мин {0} имин {1}", min, imin);
            //double max = arr[0];
            //int imax = 0;
            //for (int i = 0; i < arr.Length; i++)
            //{
            //    if (arr[i] > max)
            //    {
            //        max = arr[i];
            //        imax = i;
            //    }
            //}
            //Console.WriteLine();
            //Console.Write(" макс {0} имакс {1}", max, imax);
            //double summ = 0;
            //if (imin < imax)
            //{
            //    for (int i = imin; i < imax; i++)
            //    {
            //        summ += arr[i];
            //    }
            //    Console.WriteLine();
            //    Console.WriteLine("Сумма элементов между мин и макс: {0}", summ);
            //}
            //else
            //{
            //    for (int i = imax; i < imin; i++)
            //    {
            //        summ += arr[i];
            //    }
            //    Console.WriteLine();
            //    Console.WriteLine("Сумма элементов между мин и макс: {0}", summ);
            //}
            //Console.ReadKey();



            //задание 2
            int sum = 0;

            Console.Write("Введите число строк в массиве: ");
            int N = Convert.ToInt32(Console.ReadLine());
            Random rand = new Random();
            int[,] array = new int[N, N];
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    array[i, j] = rand.Next(0, 10);
                }
            }
            Console.WriteLine();
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                    Console.Write("{0,5:D}", array[i, j]);
                Console.WriteLine();
            }
            int imax = arra
            int max = array[0, 0];
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    if (i == j)
                    {
                        if (array[i, j] > max)
                        {
                            max = array[i, j];
                        }
                    }
                }
            }
            int min = array[0, N - 1];
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    if (i + j == N - 1)
                    {
                        if (array[i, j] < min)
                        {
                            min = array[i, j];
                        }
                    }
                }
            }
            Console.WriteLine("min {0}     max {1}", min, max);
            sum = min + max;
            Console.WriteLine("Сумма мин и макс: {0}", sum);

            Console.ReadKey();
        }
    }
}
