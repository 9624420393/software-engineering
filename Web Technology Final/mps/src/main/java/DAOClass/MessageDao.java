package DAOClass;
import Connection.DBConnection;
import model.Message;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLException;

public class MessageDao {
	public void addMessage(Message message) throws SQLException {
        Connection con = DBConnection.createConnection();
        String query = "INSERT INTO messages (`from`, `to`, msg, uid) VALUES (?, ?, ?, ?)";
        PreparedStatement ps = con.prepareStatement(query);
        ps.setString(1, message.getFrom());
        ps.setString(2, message.getTo());
        ps.setString(3, message.getMsg());
        ps.setInt(4, message.getUid());
        ps.executeUpdate();
    }
}
