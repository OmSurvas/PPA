interface A
{
    int no = 11;
    void fun();
    default void gun()
    {
        System.out.println("Inside Gun");
    }
}
class Demo implements A
{
    public void fun()
    {
        System.out.println("Inside Fun"); 
    }
}

class InterfaceDemo8
{
    public static void main(String Arr[])
    {
        Demo dobj = new Demo();
        dobj.fun();
        dobj.gun();
    }
}
