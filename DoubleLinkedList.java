import java.util.Scanner;


public class DoubleLinkedList{
    public DNode head;
    public DNode tail;
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
        tail.next = d1;
        d1.prev = tail;
        tail=d1;
        temp.next = d1;
        d1.prev = temp;
        d1.data = a;
        d1.next = null;
    }
    public void insert_at_index(int pos, int key){
        if(pos == 0 && head == null){
            DNode newnode = new DNode();
            newnode.prev = null;
        }
        if(pos == 0 && head != null){
            DNode temp = head;
            DNode newnode = new DNode();
            newnode.data = key;
            temp.next = newnode;
            newnode.prev= temp;
            newnode.next = null;
        }
        if(pos>4){
            insert_at_tail(key);
        }
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
    public int delete(int pos){
        DNode temp = head;
        if(pos == -1 ){
            return(0);
        }
        if(pos == 0){
            head = head.next;
        }
        if(pos ==3){
            tail =tail.prev;
        }

        for(int i=0;i<pos-1;i++){
            temp =  temp.next;
        }
        temp.next.next.prev = temp;
        DNode temp1= temp.next.next;
        temp.next= temp1;
        return(temp.data);
    }
    public static void main(String[] args) {
        DoubleLinkedList d1 = new DoubleLinkedList();
        d1.insert_at_head(2);
        d1.insert_at_head(1);
        d1.insert_at_tail(4);
        d1.insert_at_tail(5);
        d1.insert_at_index(2, 3);
        d1.delete(3);
        d1.print();
        
    }
}