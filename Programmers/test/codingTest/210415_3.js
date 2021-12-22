let node = [];
let sum = 0;
function solution(a, edges) {
    let root = 0;
    for(let i=0;i<a.length;i++){
        node.push(i);
        node[i]={
            parent:"",
            child:[],
            a:a[i],
        };
    }

    edges.forEach((e,i) => {
        if(node[e[1]].parent != ""){
            node[e[0]].parent = e[1];
            node[e[1]].child.push(e[0]);
            root = e[1];
        }else {
            node[e[1]].parent = e[0];
            node[e[0]].child.push(e[1]);
        }
    });
    // 노드 완성
    console.log(node);

    node.forEach( (e,i) =>{
        if(e.parent=="")
            root=i;
    });
    // 루트 완성    
    // console.log(root);

    let lastChildArr = lastChildExplore(node);
    // 마지막 자식노드 찾음
    // console.log(lastChildArr)

    lastChildArr.forEach( (e,i) =>{
        let parent = node[e].parent
        let a = node[e].a
        sumA(parent,a,node)
    })
    console.log(node)
    console.log(sum)
    return -1;
}
function sumA(parent,a,node) {
    console.log(node[parent].a,a)
    let aValue = node[parent].a + a
    sum+=Math.abs(a)
    node[parent].a = 0

    if(node[parent].parent != ""){
        sumA(node[parent].parent,aValue,node);
    }
    return node
}
function lastChildExplore(node){
    let arr =[];
    node.forEach( (e,i) =>{
        if(e.child.length==0)
            arr.push(i)
    })
    return arr;
}
console.log(    solution(   [-5,0,2,1,2],       [[0,1],[3,4],[2,3],[0,3]]   )   );