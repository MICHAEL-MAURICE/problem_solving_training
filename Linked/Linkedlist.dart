import 'ListNode.dart';

class Linkedlist{
  int length=0;
  ListNode head=null;



  printList(){
    ListNode i=head;
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
      ListNode newnode = new ListNode(value);
      length++;
      if (index == 0) {
        newnode.next = head;
        head = newnode;
      }
      else {
        ListNode i = head;
        for (int count = 0; count < index - 1; count++) {
          i = i.next;
        }
        newnode.next = i.next;
        i.next = newnode;
      }
    }

  }
  Reverse(){
    var first=head;
    var secand=first.next;
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
    ListNode i = head;
    for (int count = 0; count < index - 1; count++) {
      i = i.next;
    }
    ListNode j=i.next;
    j.next=i.next;
  }}}
}