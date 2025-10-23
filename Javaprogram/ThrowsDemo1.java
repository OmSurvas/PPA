class Demo
{
    public int Division(int No1, int No2) throws ArithmeticException
    {
        int Ans = 0;
        Ans = No1 / No2;
        return Ans;
    }
}

class ThrowsDemo1
{
    public static void main(String A[])
    {
        Demo dobj = new Demo();
        int iRet = 0;

        try
        {
        iRet = dobj.Division(11, 0);
        }
        catch(ArithmeticException aobj)
        {
            System.out.println("Inside Catch"+aobj);
        }  
        System.out.println("Division is :"+iRet);

    }    
}
