using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApp1
{
    class MobilePhone : Comunication
    {
        private bool twotimcard;
        private string typekorpus;
        private bool camera;
        public bool TwoSimCard { get; set; }
        public string TypeKorpus { get; set; }
        public bool Camera { get; set; }
        public MobilePhone():base()
        {
            TwoSimCard = false;
            TypeKorpus = null;
            Camera = false;
        }
        public MobilePhone(bool twosimcard, string typekorpus, bool camera, string proizv, string model, int year, string standartsvyaz) :base(proizv, model,year,standartsvyaz)
        {
            TwoSimCard = twosimcard;
            TypeKorpus = typekorpus;
            Camera = camera;
        }
        public override void Input()
        {
            base.Input();
            int hip1 = 0;
            Console.Write(" Работа с 2-мя SIM-картами(0 - Да; 1 - Нет): ");
            hip1 = Int32.Parse(Console.ReadLine());
            if (hip1 == 0) { TwoSimCard = true; } else { TwoSimCard = false; }
            Console.Write(" Тип корпуса(классический, раскладушка, слайдер): ");
            TypeKorpus = Console.ReadLine();
            Console.Write(" Встроенная камера(0 - Да; 1 - Нет): ");
            hip1 = Int32.Parse(Console.ReadLine());
            if (hip1 == 0) { Camera = true; } else { Camera = false; }
        }
        public override void Print()
        {
            base.Print();
            Console.WriteLine(" Работа с 2-мя SIM-картами: " + TwoSimCard);
            Console.WriteLine(" Тип корпуса: " + TypeKorpus);
            Console.WriteLine(" Встроенная камера: " + Camera);
        }
    }
}
