using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApp1
{
    class KPK : Comunication
    {
        private int mb;
        private string os;
        private string typesensor;
        public int MB { get; set; }
        public string OS { get; set; }
        public string TypeSensor { get; set; }
        public KPK()
        {     
            MB = 0;
            OS = null;
            TypeSensor = null;
        }
        public KPK(int mb, string os, string typesensor)
        {
            MB = mb;
            OS = os;
            TypeSensor = typesensor;
        }
        public override void Input()
        {
            base.Input();
            Console.WriteLine(" Объём встроенной памяти: ");
            MB = Int32.Parse(Console.ReadLine());
            Console.WriteLine(" Операционная система: ");
            OS = Console.ReadLine();
            Console.WriteLine(" Тип сенсорного экрана (обычный, резистивный, емкостной): ");
            TypeSensor = Console.ReadLine();
        }
        public override void Print()
        {
            base.Print();
            Console.WriteLine(" Объём встроенной памяти в Мб: " + MB);
            Console.WriteLine(" Операционная система: " + OS);
            Console.WriteLine(" Тип сенсорного экрана: " + TypeSensor);
        }
    }
}
