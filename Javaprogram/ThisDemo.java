class Demo
{
    public int i;
    public static int j;

    static
    {
        j=21;
    }
    public Demo()
    {
        System.out.println("Inside Default");
        this.i=11;    // First Use
    }
    public Demo(int a)
    {
        this();  // Second Use
        System.out.println("Inside paramater");
    }
    public void Display()
    {
        System.out.println("Inside Display"+this.i);  // Third Use
    }
}  

class ThisDemo {
    public static void main(String Arr[])
    {
        Demo dobj = new Demo(51);
        dobj.Display();
    }    
}
