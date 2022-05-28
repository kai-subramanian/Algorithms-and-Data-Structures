public class quickSort{
	static void Quicksort(int arr[],int low,int high){
		int mid=(low+high)/2;
		int i=low;
		int j=high;
        int pivot=arr[mid];
		while(i<=j){
			while(arr[i]<pivot){
				i++;
			}
			while(arr[j]>pivot){
				j--;
			}
			if(i<=j){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;

				i++;
				j--;
			}
		}
		if(low<j){
			Quicksort(arr,low,j);
		}
		if(high>i){
			Quicksort(arr,i,high);
		}
	}
	public static void main(String[] args) {
		// add your logic here
        int arr[]={100,84,53,98,56};
        System.out.println("before");
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
		Quicksort(arr,0,arr.length-1);
        System.out.println("after");
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        
	}
}