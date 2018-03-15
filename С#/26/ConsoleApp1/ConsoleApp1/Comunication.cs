using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApp1
{
    class Comunication
    {
        private string proizv;
        private string model;
        private int year;
        private string standartsvyaz;
        public string Proizv { get; set; }
        public string Model { get; set; }
        public int Year { get; set; }
        public string StandartSvyaz { get; set; }
        public Comunication()
        {
            Proizv = null;
            Model = null;
            Year = 0;
            StandartSvyaz = null;
        }
        public Comunication(string proizv, string model, int year, string standartsvyaz)
        {
            Proizv = proizv;
            Model = model;
            Year = year;
            StandartSvyaz = standartsvyaz;
        }
        public virtual void Input()
        {
            Console.WriteLine(" Производитель: ");
            Proizv = Console.ReadLine();
            Console.WriteLine(" Модель: ");
            Model = Console.ReadLine();
            Console.WriteLine(" Год: ");
            Year = Int32.Parse(Console.ReadLine());
            Console.WriteLine(" Поддерживаемые стандарты связи: ");
            StandartSvyaz = Console.ReadLine();
        }
        public virtual void Print()
        {
            Console.WriteLine(" Производитель: " + Proizv);
            Console.WriteLine(" Модель: " + Model);
            Console.WriteLine(" Год: " + Year);
            Console.WriteLine(" Поддерживаемые стандарты связи: " + StandartSvyaz);
        }
    }
}
