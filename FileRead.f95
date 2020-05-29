program FILEREADER

   real, dimension(:,:), allocatable :: x
   integer :: n,m
   integer :: res

   open (unit=99, file='testFilePositives.dat', status='old', action='read')
   
   read(99, *) n
   read(99, *) m
   allocate(x(n,m))

   do I=1,n,1
      read(99,*) x(I,:)  !read file line and stores each element separated by space on corresponding vector position

      !8 FORMAT (Z2)      !hexadecimal format 2 digits
      
      !res = x(I,1)
      !write(*,8) res  !print rowI col1 in hex format
      !write(*,*) x(I,1)         !print rowI col1
      write(*,*) x(I,1)*x(I,1)  !print rowI col1 square
      
      !write(*,*) x(I,2)            !print rowI col2
      write(*,*) x(I,2)*x(I,2)     !print rowI col2 square

      !write(*,*) x(I,3)         !print rowI col3
      write(*,*) x(I,3)*x(I,3)  !print rowI col3 square

      
   enddo

end