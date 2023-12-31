	 # i n c l u d e < v e c t o r >  
   / / D e f i n i t i o n   f o r   a   b i n a r y   t r e e   n o d e .  
   s t r u c t   T r e e N o d e   {  
             i n t   v a l ;  
             T r e e N o d e   * l e f t ;  
             T r e e N o d e   * r i g h t ;  
             T r e e N o d e ( )   :   v a l ( 0 ) ,   l e f t ( n u l l p t r ) ,   r i g h t ( n u l l p t r )   { }  
             T r e e N o d e ( i n t   x )   :   v a l ( x ) ,   l e f t ( n u l l p t r ) ,   r i g h t ( n u l l p t r )   { }  
             T r e e N o d e ( i n t   x ,   T r e e N o d e   * l e f t ,   T r e e N o d e   * r i g h t )   :   v a l ( x ) ,   l e f t ( l e f t ) ,   r i g h t ( r i g h t )   { }  
   } ;  
  
 c l a s s   S o l u t i o n   {  
 p u b l i c :  
 	 v e c t o r < i n t >   a n s w e r ;  
         v e c t o r < i n t >   p r e o r d e r T r a v e r s a l ( T r e e N o d e *   r o o t )   {  
                 s e a r c h ( r o o t ) ;  
                 r e t u r n   a n s w e r ;  
         }  
          
 	 v o i d   s e a r c h ( T r e e N o d e *   n o d e ) {  
 	 	 i f ( n o d e   = =   n u l l p t r ) {  
                 	 r e t u r n ;  
 	 	 }  
 	 	 a n s w e r . p u s h _ b a c k ( n o d e   - >   v a l ) ;  
 	 	 s e a r c h ( n o d e   - >   l e f t ) ;  
 	 	 s e a r c h ( n o d e   - >   r i g h t ) ;  
 	 }  
 } ; 