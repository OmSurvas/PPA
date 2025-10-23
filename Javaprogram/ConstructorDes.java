class Demo 
{
    public int iNo1;
    public int iNo2;

    public Demo()
    {
        System.out.println("Inside Default Construtor");
    }
    public Demo(int i, int j)
    {
        System.out.println("Inside parametrised Construtor");
    }
    protected void finalize()
    {
        System.out.println("Inside Finalised");
    }

}

class ConstructorDes
{
    public static void main(String A[])
    {
         Demo dobj1 = new Demo();

         Demo dobj2 = new Demo(11, 21);

         dobj1 = null;
         dobj2 = null;
         System.gc();

         System.out.println("End Of Main");
    }
}

