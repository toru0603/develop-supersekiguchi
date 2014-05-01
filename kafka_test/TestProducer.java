import java.util.*;

import org.apache.kafka.clients.producer.Producer;
import org.apache.kafka.clients.producer.KafkaProducer;
import org.apache.kafka.clients.producer.ProducerRecord;
 
public class TestProducer {
    public static void main(String[] args) {
        long events = Long.parseLong(args[0]);
        Random rnd = new Random();
 
        Map<String, Object> props = new HashMap<String, Object>();
        props.put("metadata.broker.list", "localhost:9092,localhost:9093,localhost:9024");
        props.put("serializer.class", "kafka.serializer.StringEncoder");
        props.put("partitioner.class", "example.producer.SimplePartitioner");
        props.put("request.required.acks", "1");
 
        Producer producer = new KafkaProducer(props);
 
        for (long nEvents = 0; nEvents < events; nEvents++) { 
               long runtime = new Date().getTime();
               String ip = runtime + ", " + Long.toString(nEvents); 
               try {
                       byte[] msg = ip.getBytes("UTF-8"); 
		       String topic = "my-replicated-topic";
                       ProducerRecord data = new ProducerRecord(topic, msg);
                       producer.send(data);
                }
                catch(Exception e) {
                       e.printStackTrace();
                }
        }
        producer.close();
    }
}
