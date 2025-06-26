package Day16;

public class InversionCount {

    int inversionCount(int arr[]){
        int c = 0;
        for(int i= 0;i<arr.length;i++){
            for(int j = i+1;j<arr.length;j++){
                if(arr[i] > arr[j])c++;
            }
        }
        return c;
    }
    
    int merge(int arr[],int s,int e){
        if(s >= e)return 0;
        int mid = s+(e-s)/2;
        int narr[] = new int[(e-s)+1];
        int i = s;
        int j = mid+1;
        int k = 0;
        int c = 0;

        while(i <= mid && j<= e){
            if(arr[i] > arr[j]){
                c+=(mid-i+1);
                narr[k++] = arr[j++];
            }else if(arr[i] <= arr[j]){
                narr[k++] = arr[i++];
            }
        }

        while(i<=mid){
            narr[k++] = arr[i++];
        }

        while(j<=e){
            narr[k++] = arr[j++];
        }

        return c;
    }

    int inversionCountMerge(int arr[],int s,int e){
        if(s >= e)return 0;
        int mid = s+(e-s)/2;
        int c = inversionCountMerge(arr, s, mid);
        c+=inversionCountMerge(arr, mid+1, e);
        c+=merge(arr,s,e);
        return c;
    }

}