import com.monkeylearn.MonkeyLearn;
import com.monkeylearn.MonkeyLearnException;
import com.monkeylearn.MonkeyLearnResponse;


    public class NewsValue {
        public static void main( String[] args ) throws MonkeyLearnException {
            MonkeyLearn ml = new MonkeyLearn("[YOUR_API_KEY]");
            String modelId = "[MODEL_ID]";
            String[] textList = {"first text", "second text"};
            MonkeyLearnResponse res = ml.classifiers.classify(modelId, textList, true);
            System.out.println( res.arrayResult );
        }
    }


