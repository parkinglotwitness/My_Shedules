﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            DoublyLinkedList<string> linkedList = new DoublyLinkedList<string>();
            // добавление элементов
            linkedList.Add("Bob");
            linkedList.Add("Bill");
            linkedList.Add("Tom");
            linkedList.AddFirst("Kate");
            foreach (var item in linkedList)
            {
                Console.WriteLine(item);
            }
            // удаление
            linkedList.Remove("Bill");

            // перебор с последнего элемента
            foreach (var t in linkedList)
            {
                Console.WriteLine(t);
            }
            Console.ReadKey();
        }
    }
}
