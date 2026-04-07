using Microsoft.AspNetCore.Components.Web;

namespace mo.Pages
{
    public partial class Counter
    {
        string i ;//المتغير الفارغ

        List<string> i1 = new List<string>();//لسته فارغه

        void add()//الكود الدي يعمل عند الضغط  مربوط
        {
            i1.Add(i);//يضع كل ماكتب في اللسته ويحفظه
            i = "";
        }

        




    }
}
  
