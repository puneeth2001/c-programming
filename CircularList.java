public class CircularList{
    public CNode head;
    public void insert_at_head(int val){
        CNode temp = head;
        CNode newnode = new CNode();
        newnode.data = val;
        if(head == null){
            head = newnode;
            newnode.next = head;
        } 
        else{
            while(temp.next !=head){
                temp = temp.next;
            }
            temp.next = newnode;
            newnode.next = head;
            head = newnode;
        }

}

    public void insert_at_tail(int val){
        CNode temp = head;
        CNode newnode = new CNode();
        newnode.data = val;
        if(head==null)
        {
            head=newnode;
            newnode.next=head;
        }
        else{
        while(temp.next != head){
            temp = temp.next;
        }
        temp.next = newnode;
        newnode.next = head;
    
    }
    }
    public void insert_at_pos(int pos, int val){
        CNode temp = head;
        CNode newnode = new CNode();
        newnode.data = val;
        if(pos==1)
        {
            insert_at_head(val);
        }
        else
        {
            for(int i=0;i<pos-1;i++){
                temp = temp.next;
            }
            newnode.next = temp.next;
            temp.next = newnode;    
        }
           }
    public void print(){
        if(head == null){
            System.out.println("empty");
        }
        else{
            CNode temp = head;
            CNode head2 = head;
            do{
                System.out.println(temp.data);
                temp = temp.next;
            }
            while(temp!=head2);
        }
    }
    public static void main(String[] args){
        CircularList c1 = new CircularList();
        c1.insert_at_head(2);
        c1.insert_at_head(5);
        c1.insert_at_tail(4);
        c1.insert_at_pos(2, 3);
        c1.print();
    }
}
