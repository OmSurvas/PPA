import java.util.*;

class ExceptionDemo4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
    
        int iNo1 = 0, iNo2 = 0; 
        float fAns = 0.0f;

        System.out.println("Enter first Number");
        iNo1 = sobj.nextInt();

        System.out.println("Enter Second Number");
        iNo2 = sobj.nextInt();

        try
        {
        System.out.println("Inside try block");
        fAns = iNo1 / iNo2;
        }
        catch(ArithmeticException aobj)
        {
        System.out.println("Inside catch block");
        System.out.println(aobj);
        }
        
        System.out.println("Division is :"+fAns);
    }    
}
