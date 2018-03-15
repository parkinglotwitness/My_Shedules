using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            //задание 1
            int cout = 0;
            string s = "sdgsdfninegsd";
            Regex regex = new Regex("nine", RegexOptions.IgnoreCase);
            MatchCollection matches = regex.Matches(s);

            if (matches.Count > 0)
            {

                foreach (Match match in matches)
                    cout++;
            }
            Console.WriteLine("s: {0}",s);
            Console.WriteLine("s(0): {0}", regex);
            if (cout > 0) { Console.WriteLine("True"); }
            else { Console.WriteLine("False"); }
            Console.ReadLine();
            Console.ReadKey();


            //задание 2
            //string words = "aaa sdghusdfgdfrderterttghsdfg     yusdhgdfjkjxc";
            //var str = from word in words.Split(' ')
            //          orderby word.Length
            //          select word;
            //string dlin = str.Last();
            //Console.WriteLine("{0}", words);
            //Console.WriteLine("Самое длинное слово: '{0}'. Длина: {1}",
            //    dlin, dlin.Length);
            //Console.ReadKey();



            //задание 3
            //Console.WriteLine("Введите слово,которое нужно зашифровать:");
            //string s = Console.ReadLine();
            //string abc = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
            ////abc наш алфавит
            //Console.WriteLine("Укажите длину сдвига");
            //int len = Convert.ToInt32(Console.ReadLine());
            //// len - число сдвигов в сторону
            //int a;
            //string code = string.Empty;
            //for (int i = 0; i < s.Length; i++)
            //{
            //    int pos=0;
            //    char c = s[i];
            //        pos = abc.IndexOf(c);
            //        a = pos + len;
            //        code += abc[a];
            //}
            //Console.WriteLine(code);
            //Console.ReadLine();
        }
    }
}
