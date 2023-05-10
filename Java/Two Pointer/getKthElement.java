public class getKthElement {
    static int getTheElement(int[] firstArr, int[] secondArr, int k) {
        // add logic here
        int f=firstArr.length;
        int s=secondArr.length;
        int res[]=new int[f+s];
        int i=0,j=0,x=0;
        while(i<f && j<s){
            if(firstArr[i]<=secondArr[j]){
                res[x]=firstArr[i];
                i++;
            }else{
                res[x]=secondArr[j];
                j++;
            }
            x++;
        }
        while(i<f){
            res[x]=firstArr[i];
            i++;
            x++;
        }
        while(j<s){
            res[x]=secondArr[j];
            j++;
            x++;
        }
        return res[k];
    }        
    public static void main(String[] args) {
        int arr1[]={1, 2, 3, 4, 5, 6};
        int arr2[]={3, 4, 4, 5, 6, 6};
        int l=6;
        System.out.println(getTheElement(arr1,arr2,l));
    }
}
