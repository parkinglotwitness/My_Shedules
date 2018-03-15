using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    class BusList:IEnumerable
    {
        private List<Bus> bus;
        public int Length
        {
            get { return bus.Count; }
        }
        public BusList(int size)
        {
            bus = new List<Bus>(size);
        }
        public void AddItem()
        {
            Bus item = new Bus();
            item.Input();
            bus.Add(item);
        }
        public void RemoveItem(int pos)
        {
            bus.RemoveAt(pos);
        }
        public Bus this[int index]
        {
            get { return bus[index]; }
            set { bus[index] = value;  }
        }
        IEnumerator IEnumerable.GetEnumerator()
        {
            return bus.GetEnumerator();
        }
    }
}
