


main(){
  Hash_table value = new  Hash_table(11);
  var v=value.hash(11);
  value.set(v, 11);
  print(v);
}
class Hash_table{
  int size;
  Hash_table(this.size);
   List arr;
  hash(key
      ){
    var hash =0;
    for(int i=0;i<5;i++){
      hash=((key+i)*(i+2))%size;
    }
    return hash;
  }

  set(key,value){
    var hashH= hash(key);
    arr[hashH]=value;
    print ("Done");
  }
  _get (){}

}
