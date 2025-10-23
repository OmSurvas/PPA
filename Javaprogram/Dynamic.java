import java.util.Scanner;

class Dynamic {

    public static void main(String A[]) 
    {

        Scanner sobj = new Scanner(System.in);

        int length = 0;
        int[] Arr;
    
        System.out.println("Enter The Number OF Elements : ");
        length = sobj.nextInt();

        Arr = new int[length];

        if (Arr == null) {
            System.out.println("Unable to allocate the memory");
        }
        else
        {
            System.out.println("Successfully Memory allcate");
        }
        Arr = null;
        System.gc();
    }
    
}
