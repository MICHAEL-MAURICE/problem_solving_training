import 'Doubly_node.dart';

class Doubly_Linkedlist{
  int length=0;
  Doubly_ListNode head=null;


  printList(){
    Doubly_ListNode i=head;
    while(i!=null){
      print(i.value);
      i=i.next;
    }
  }

  add(var index,var value){
    if(index>length||0>index){
      print('ERROR');
    }
    else{
      Doubly_ListNode newnode = new  Doubly_ListNode(value);
      length++;
      if (index == 0) {
        newnode.next = head;
        head = newnode;
      }
      else {
        Doubly_ListNode i = head;
        for (int count = 0; count < index - 1; count++) {
          i = i.next;
        }
        newnode.prev=i;
        newnode.next = i.next;
        i.next = newnode;
      }
    }

  }


  remove(var index){
    if(head==null||index>length||0>index){
      print('ERROR');
    }
    else{
      if (index==0){
        head=head.next;
      }
      else{
        Doubly_ListNode i = head;
        for (int count = 0; count < index - 1; count++) {
          i = i.next;
        }

        Doubly_ListNode j=i.next;
        j.next=i.next;

      }}}
}