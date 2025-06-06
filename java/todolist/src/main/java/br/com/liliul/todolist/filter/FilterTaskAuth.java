package br.com.liliul.todolist.filter;

import at.favre.lib.crypto.bcrypt.BCrypt;
import br.com.liliul.todolist.user.IUserRepository;
import jakarta.servlet.*;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import org.springframework.stereotype.Component;
import org.springframework.web.filter.OncePerRequestFilter;

import java.io.IOException;
import java.util.Base64;

@Component
public class FilterTaskAuth extends OncePerRequestFilter {

    private final IUserRepository userRepository;

    public FilterTaskAuth(IUserRepository userRepository) {
        this.userRepository = userRepository;
    }

    @Override
    protected void doFilterInternal(HttpServletRequest request, HttpServletResponse respose, FilterChain filterChain) throws ServletException, IOException{

        var servletPath = request.getServletPath();

        if (servletPath.startsWith("/tasks/")) {
            // autenticacão (usuario e senha)
            var authorization = request.getHeader("Authorization");

            var authEncoded = authorization.substring("Basic".length()).trim();

            byte[] authDecode = Base64.getDecoder().decode(authEncoded);

            var authString = new String(authDecode);

            String[] credentials = authString.split(":");
            String username = credentials[0];
            String password = credentials[1];

            System.out.println("Auth");
            System.out.println(username);
            System.out.println(password);

            // validar usuario
            var user = this.userRepository.findByUsername(username);
            if (user == null) {
                respose.sendError(401);
            } else {
                // validar senha
                var passwordVerify = BCrypt.verifyer().verify(password.toCharArray(), user.getPassword());
                if (passwordVerify.verified) {
                    request.setAttribute("idUser", user.getId());
                    filterChain.doFilter(request, respose);
                } else {
                    respose.sendError(401);
                }
            }
        } else {
            filterChain.doFilter(request, respose);
        }

//        filterChain.doFilter(request, respose);
//        throw new UnsupportedOperationException("Unimplemented method 'doFilterInternal'");
    }
}
