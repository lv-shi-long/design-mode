
HS=`find -name "*.h"`
CPPS=`find -name "*.cpp"`
for file in $HS; do 

	echo $file
	cp $file .
done

for file in $CPPS; do

        echo $file
        cp $file .
done

