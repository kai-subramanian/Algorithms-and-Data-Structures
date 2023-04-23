class Queue{
    int arr[]=new int[10];
    int front=0;
    int rear=0;
    void enqueue(int x){
        if(rear==10){
            System.out.println("Cannot add to full queue");
        }else{
            arr[rear]=x;
            rear++;
        }

    }
    void dequeue(){
        if(front==rear){
            System.out.println("Cannot remove from empty queue");
        }else{
            for(int i=0;i<rear-1;i++){
                arr[rear]=arr[rear+1];
            }
        }
        if(rear<10){
            arr[rear]=0;
            rear--;
        }
    }
    void poll(){
        System.out.println("Head is : "+arr[front]);
    }
}
public class CustomQueue{
    public static void main(String[] args) {
        Queue q=new Queue();
        q.enqueue(40);
        q.enqueue(20);
        q.enqueue(30);

        q.dequeue();
        q.dequeue();
        q.dequeue();
        q.dequeue();

        q.poll();

    }
}