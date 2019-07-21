public class DoubleLinkedList{
    public DNode head;
    public void insert_at_head(int a){
        DNode d1 = new DNode();
        d1.data = a;
        d1.prev = null;
        d1.next = head;
        head = d1;
    }
    public void insert_at_tail(int a){
        DNode d1 = new DNode();
        DNode temp = head;
        d1.data = a;
        while(temp.next != null){
            temp = temp.next;
        }
        temp.next = d1;
        d1.prev = temp;
        d1.data = a;
        d1.next = null;
    }
    public void insert_at_index(int pos, int key){
        DNode newnode = new DNode();
        newnode.data = key;
        DNode temp = head;
        for(int i=0;i<pos-1;i++){
            temp = temp.next;
        }
        newnode.next = temp.next;
        temp.next.prev = newnode;
        temp.next = newnode;
        newnode.prev = temp;

    }
    public void print(){
        DNode temp = head;
        while(temp!= null){
            System.out.println(temp.data);
            temp = temp.next;
        }
    }
    public static void main(String[] args) {
        DoubleLinkedList d1 = new DoubleLinkedList();
        System.out.println("x");
        d1.insert_at_head(2);
        d1.insert_at_head(1);
        d1.insert_at_index(1, 3);
        d1.print();
        
    }
}