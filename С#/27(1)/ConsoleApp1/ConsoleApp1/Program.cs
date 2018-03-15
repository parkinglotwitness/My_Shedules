using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
//using System.Collections.ObjectModel;
//using System.Collections.Specialized;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Количество автобусов: ");
            int size_list = Convert.ToInt32(Console.ReadLine());
            BusList busList = new BusList(size_list);
            for (int i = 0; i < size_list; i++)
            {
                busList.AddItem();
            }
            Console.Clear();
            for (int i = 0; i < size_list; i++)
            {
                busList[i].Print();
            }
            Console.Write("Введите позицию элемента для удаления: ");
            int pos = Convert.ToInt32(Console.ReadLine());
            busList.RemoveItem(pos);
            foreach (Bus item in busList)
            Console.WriteLine(item.Model + " " + item.Power + " " + item.Sit);

            Console.WriteLine("Введите данные Автобуса для вставки: ");
            busList.AddItem();
            // выводим данные с помощью цикла foreach благодаря реализованному перечислителю            
            foreach (Bus item in busList)
                Console.WriteLine(item.Model + " " + item.Power + " " + item.Sit); 

            Console.Write("Введите позицию Автобуса для изменения (всего {0} автобусов): ", busList.Length);
            pos = Convert.ToInt32(Console.ReadLine());
            Bus temp = new Bus(); temp.Input();
            // с помощью индексатора изменяем значений объекта класса Bus на заданной позиции в списке List<T>             
            busList[pos] = temp;
            foreach (Bus item in busList)
            Console.WriteLine(item.Model + " " + item.Power + " " + item.Sit); 
            Console.ReadKey();
        }
      //  private static void Users_CollectionChanged(Object sender, NotifyCollectionChangedEventArgs e)
    }
}
