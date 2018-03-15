using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    class Bus
    {
        public string Model { get; set; }
        public double Power { get; set; }
        public byte Sit { get; set; }
        public Bus()
        {
            Model = null;
            Power = 0.0;
            Sit = 0;
        }
        public Bus(string model, double power, byte sit)
        {
            Model = model;
            Power = power;
            Sit = sit;
        }
        public void Input()
        {
            Console.Write("Модель: ");
            Model = Console.ReadLine();
            Console.Write("Мощность: ");
            Power = Convert.ToDouble(Console.ReadLine());
            Console.Write("Кольчество сидячих мест: ");
            Sit = Convert.ToByte(Console.ReadLine());
        }
        public void Print()
        {
            Console.WriteLine("Модель: {0}", Model);
            Console.WriteLine("Мощность: {0}", Power);
            Console.WriteLine("Кольчество сидячих мест: {0}", Sit);
        }
    }
}
