interface A
{
    int no = 11;
    void fun();
    private void Display()
    {
        System.out.println("Inside Private Display");
    }
    
    default void gun()
    {
        System.out.println("Inside Gun");
        Display();
    }
    
}
class Demo implements A
{
    public void fun()
    {
        System.out.println("Inside Fun"); 
    }
}

class InterfaceDemo9
{
    public static void main(String Arr[])
    {
        Demo dobj = new Demo();
        dobj.fun();
        dobj.gun();
        // dobj.Display();   // Error
    }
}
